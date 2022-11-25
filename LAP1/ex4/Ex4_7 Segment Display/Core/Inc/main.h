/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED1_Pin GPIO_PIN_1
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_2
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_3
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_RED2_Pin GPIO_PIN_4
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_5
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_6
#define LED_GREEN2_GPIO_Port GPIOA
#define LED_RED3_Pin GPIO_PIN_7
#define LED_RED3_GPIO_Port GPIOA
#define SIGNAL_1_Pin GPIO_PIN_0
#define SIGNAL_1_GPIO_Port GPIOB
#define SIGNAL_2_Pin GPIO_PIN_1
#define SIGNAL_2_GPIO_Port GPIOB
#define SIGNAL_3_Pin GPIO_PIN_2
#define SIGNAL_3_GPIO_Port GPIOB
#define LED_YELLOW3_Pin GPIO_PIN_8
#define LED_YELLOW3_GPIO_Port GPIOA
#define LED_GREEN3_Pin GPIO_PIN_9
#define LED_GREEN3_GPIO_Port GPIOA
#define LED_RED4_Pin GPIO_PIN_10
#define LED_RED4_GPIO_Port GPIOA
#define LED_YELLOW4_Pin GPIO_PIN_11
#define LED_YELLOW4_GPIO_Port GPIOA
#define LED_GREEN4_Pin GPIO_PIN_12
#define LED_GREEN4_GPIO_Port GPIOA
#define SIGNAL_4_Pin GPIO_PIN_3
#define SIGNAL_4_GPIO_Port GPIOB
#define SIGNAL_5_Pin GPIO_PIN_4
#define SIGNAL_5_GPIO_Port GPIOB
#define SIGNAL_6_Pin GPIO_PIN_5
#define SIGNAL_6_GPIO_Port GPIOB
#define SIGNAL_7_Pin GPIO_PIN_6
#define SIGNAL_7_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
