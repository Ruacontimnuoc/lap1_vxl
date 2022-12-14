/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void display7SEG_24(int num){
	switch (num)
		{
		case 0:
				{
				HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, SET);
				break;
				}
		case 1:
			{
			HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, SET);
			break;
			}
		case 2:
			{
				HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
				break;
			}
		case 3:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		case 4:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		case 5:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		case 6:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		case 7:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, SET);
					break;
				}
		case 8:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		case 9:
				{
					HAL_GPIO_WritePin(SIGNAL8_GPIO_Port, SIGNAL8_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL9_GPIO_Port, SIGNAL9_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL10_GPIO_Port, SIGNAL10_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL11_GPIO_Port, SIGNAL11_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL12_GPIO_Port, SIGNAL12_Pin, SET);
					HAL_GPIO_WritePin(SIGNAL13_GPIO_Port, SIGNAL13_Pin, RESET);
					HAL_GPIO_WritePin(SIGNAL14_GPIO_Port, SIGNAL14_Pin, RESET);
					break;
				}
		}
}

void display7SEG_13(int num){
	switch (num)
	{
	case 0:
			{
			HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, SET);
			break;
			}
	case 1:
		{
		HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, SET);
		HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
		HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
		HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, SET);
		HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
		HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, SET);
		HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, SET);
		break;
		}
	case 2:
		{
			HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, RESET);
			HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, SET);
			HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
			break;
		}
	case 3:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	case 4:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	case 5:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	case 6:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	case 7:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, SET);
				break;
			}
	case 8:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	case 9:
			{
				HAL_GPIO_WritePin(SIGNAL1_GPIO_Port, SIGNAL1_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL2_GPIO_Port, SIGNAL2_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL3_GPIO_Port, SIGNAL3_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL4_GPIO_Port, SIGNAL4_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL5_GPIO_Port, SIGNAL5_Pin, SET);
				HAL_GPIO_WritePin(SIGNAL6_GPIO_Port, SIGNAL6_Pin, RESET);
				HAL_GPIO_WritePin(SIGNAL7_GPIO_Port, SIGNAL7_Pin, RESET);
				break;
			}
	}
}
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int time_red =5,time_yellow =2,time_green =3;
      int couter_time=0;
      int led_status =0;
      int couter_led1=0;
      int couter_led2=0;

      while (1)
      {
        /* USER CODE END WHILE */
    	  if(led_status == 0){
    	  // DEN DO KICH HOAT
    	  	// DO 13 XANH 24
    		  //DEN DO
    	  	  	HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_SET ) ;
    	  		// DDEN VANG
    	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;
    	  		//DEN XANH
    	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_RESET ) ;

    	  		if(couter_time>time_red-time_yellow){
    	  			led_status = 1;
    	  			couter_time =0;
    	  			couter_led2=0;
    	  		}else{
    	  			couter_time =couter_time+1;
    	  			led_status =0;
    	  			display7SEG_13(time_red-couter_led1);
    	  			display7SEG_24(time_green-couter_led2);
    	  			couter_led1=couter_led1+1;
    	  			couter_led2=couter_led2+1;
    		  		HAL_Delay(500);
    	  		}
    	  }
    	  if(led_status ==1){
    		  //// DO 13 VANG 24

    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  		if(couter_time>time_red-time_green){
    		  			  			led_status = 2;
    		  			  			couter_time =0;
    		  			  			couter_led1=0;
    		  			  			couter_led2=0;
    		  		}else{
    		  			  	couter_time =couter_time+1;
    		  			  	led_status =1;
    		  			  	display7SEG_13(time_red-couter_led1);
    		  			    display7SEG_24(time_yellow-couter_led2);
    		  			    couter_led1=couter_led1+1;
    		  			    couter_led2=couter_led2+1;
    		  			  	HAL_Delay(500);
    		  		}
    	  }
    	  if(led_status ==2){
    		  // DEN XANH KICH HOAT

    		  	// DO 24 XANH 13
    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  		if(couter_time>time_red-time_yellow){
    		  			  			led_status = 3;
    		  			  			couter_time =0;
    		  			  			couter_led1=0;
    		  			  		}else{
    		  			  			couter_time =couter_time+1;
    		  			  			display7SEG_13(time_green-couter_led1);
    		  			  			display7SEG_24(time_red-couter_led2);
    		  			  			couter_led1 =couter_led1+1;
    		  			  			couter_led2 =couter_led2+1;
    		  			  			led_status =2;
    		  			  			HAL_Delay(500);
    		  			  		}
    	  }
    	  if(led_status == 3){


    		  	//// DO 24 VANG 13

    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  	//////////////////////////////////////
    		  		if(couter_time>time_red-time_green){
    		  				  			  			led_status = 0;
    		  				  			  			couter_time =0;
    		  				  			  			couter_led1=0;
    		  				  			  		    couter_led2=0;
    		  				  		}else{
    		  				  			  	couter_time =couter_time+1;
    		  				  			  	led_status =3;
    		  				  			  	display7SEG_13(time_yellow-couter_led1);
    		  				  			  	display7SEG_24(time_red-couter_led2);
    		  		  			  			couter_led1 =couter_led1+1;
    		  		  			  			couter_led2 =couter_led2+1;
    		  		  			  			HAL_Delay(500);
    		  				  		}
    	  }
      }
  }

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin|LED_RED3_Pin|LED_YELLOW3_Pin
                          |LED_GREEN3_Pin|LED_RED4_Pin|LED_YELLOW4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SIGNAL1_Pin|SIGNAL2_Pin|SIGNAL3_Pin|SIGNAL11_Pin
                          |SIGNAL12_Pin|SIGNAL13_Pin|SIGNAL14_Pin|SIGNAL4_Pin
                          |SIGNAL5_Pin|SIGNAL7_Pin|SIGNAL8_Pin|SIGNAL9_Pin
                          |SIGNAL10_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin LED_RED3_Pin LED_YELLOW3_Pin
                           LED_GREEN3_Pin LED_RED4_Pin LED_YELLOW4_Pin */
  GPIO_InitStruct.Pin = LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin|LED_RED3_Pin|LED_YELLOW3_Pin
                          |LED_GREEN3_Pin|LED_RED4_Pin|LED_YELLOW4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SIGNAL1_Pin SIGNAL2_Pin SIGNAL3_Pin SIGNAL11_Pin
                           SIGNAL12_Pin SIGNAL13_Pin SIGNAL14_Pin SIGNAL4_Pin
                           SIGNAL5_Pin SIGNAL7_Pin SIGNAL8_Pin SIGNAL9_Pin
                           SIGNAL10_Pin */
  GPIO_InitStruct.Pin = SIGNAL1_Pin|SIGNAL2_Pin|SIGNAL3_Pin|SIGNAL11_Pin
                          |SIGNAL12_Pin|SIGNAL13_Pin|SIGNAL14_Pin|SIGNAL4_Pin
                          |SIGNAL5_Pin|SIGNAL7_Pin|SIGNAL8_Pin|SIGNAL9_Pin
                          |SIGNAL10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : LED_GREEN4_Pin */
  GPIO_InitStruct.Pin = LED_GREEN4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  HAL_GPIO_Init(LED_GREEN4_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SIGNAL6_Pin */
  GPIO_InitStruct.Pin = SIGNAL6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(SIGNAL6_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  	  int time_red =5,time_yellow =2,time_green =3;
      int couter_time=0;
      int led_status =0;
      int couter_led1=0;
      int couter_led2=0;

      while (1)
      {
        /* USER CODE END WHILE */
    	  if(led_status ==0){
    	  // DEN DO KICH HOAT
    	  	// DO 13 XANH 24
    	  	  	HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_SET ) ;

    	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;

    	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_RESET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    	  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_RESET ) ;


    	  		if(couter_time>time_red-time_yellow){
    	  			led_status = 1;
    	  			couter_time =0;
    	  		}else{
    	  			couter_time =couter_time+1;
    	  			led_status =0;
    	  			// TIME 13
    	  			display7SEG_13(time_red-couter_led1);
    	  			couter_led1=couter_led1+1;
    	  			// TIME 24
    	  			display7SEG_24(time_green-couter_led2);
    	  			couter_led2=couter_led2+1;
    	  			if(time_green-couter_led2==0){couter_led2=0;};
    		  		HAL_Delay(500);
    	  		}
    	  }
    	  if(led_status ==1){
    		  //// DO 13 VANG 24

    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  		if(couter_time>time_red-time_green){
    		  			  			led_status = 2;
    		  			  			couter_time =0;
    		  		}else{
    		  			  	couter_time =couter_time+1;
    		  			  	led_status =1;
    		  			  	// TIME 13
    		  			  	display7SEG_13(time_red-couter_led1);
    		  			  	couter_led1=couter_led1+1;
    		  			  	if(time_red-couter_led1==0){couter_led1=0;}
    		  			  	// TIME 24
    		  			  	display7SEG_24(time_yellow-couter_led2);
    		  			    couter_led2=couter_led2+1;
    		  			  	if(time_yellow-couter_led2==0){couter_led2=0;};
    		  			  	HAL_Delay(500);
    		  		}
    	  }
    	  if(led_status ==2){
    		  // DEN XANH KICH HOAT

    		  	// DO 24 XANH 13
    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  		if(couter_time>time_red-time_yellow){
    		  			  			led_status = 3;
    		  			  			couter_time =0;
    		  			  		}else{
    		  			  			couter_time =couter_time+1;
    		  			  			led_status =2;
    		  			  			// TIME 13
    		  			  			display7SEG_13(time_green-couter_led1);
    		  			  			couter_led1 =couter_led1+1;
    		  			  		  	if(time_green-couter_led1==0){couter_led1=0;}
    		  			  			// TIME 24
    		  			  		  	display7SEG_24(time_red-couter_led2);
    		  			  		  	couter_led2 =couter_led2+1;
    		  			  		  	if(time_red-couter_led2==0){couter_led2=0;}
    		  			  			HAL_Delay(500);
    		  			  		}
    	  }
    	  if(led_status == 3){


    		  	//// DO 24 VANG 13

    		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin ,  GPIO_PIN_RESET ) ;

    		  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin ,  GPIO_PIN_RESET ) ;
    		  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin ,  GPIO_PIN_SET ) ;

    		  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin ,  GPIO_PIN_SET ) ;
    		  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin ,  GPIO_PIN_SET ) ;
    		  		if(couter_time>time_red-time_green){
    		  				  			  			led_status = 0;
    		  				  			  			couter_time =0;
    		  				  		}else{
    		  				  			  	couter_time =couter_time+1;
    		  				  			  	led_status =3;
    		  				  			  	// TIME 13
    		  				  			  	display7SEG_13(time_yellow-couter_led1);
    		  		  			  			couter_led1 =couter_led1+1;
    		  				  		  		if(time_yellow-couter_led1==0){couter_led1=0;}
    		  		  			  			// TIME 24
    		  				  		  	    display7SEG_24(time_red-couter_led2);
    		  				  		  	    couter_led2 =couter_led2+1;
    		  				  		  	    if(time_red-couter_led2==0){couter_led2=0;}
    		  				  		  		HAL_Delay(500);
    		  				  		}

    	  }
        /* USER CODE BEGIN 3 */
      }

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
