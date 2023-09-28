/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define RED_1_Pin GPIO_PIN_1
#define RED_1_GPIO_Port GPIOA
#define YELLOW_1_Pin GPIO_PIN_2
#define YELLOW_1_GPIO_Port GPIOA
#define GREEN_1_Pin GPIO_PIN_3
#define GREEN_1_GPIO_Port GPIOA
#define RED_2_Pin GPIO_PIN_4
#define RED_2_GPIO_Port GPIOA
#define YELLOW_2_Pin GPIO_PIN_5
#define YELLOW_2_GPIO_Port GPIOA
#define GREEN_2_Pin GPIO_PIN_6
#define GREEN_2_GPIO_Port GPIOA
#define G1_Pin GPIO_PIN_0
#define G1_GPIO_Port GPIOB
#define F1_Pin GPIO_PIN_1
#define F1_GPIO_Port GPIOB
#define E1_Pin GPIO_PIN_2
#define E1_GPIO_Port GPIOB
#define F2_Pin GPIO_PIN_10
#define F2_GPIO_Port GPIOB
#define E2_Pin GPIO_PIN_11
#define E2_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_12
#define D2_GPIO_Port GPIOB
#define C2_Pin GPIO_PIN_13
#define C2_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_14
#define B2_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_15
#define A2_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_3
#define D1_GPIO_Port GPIOB
#define C1_Pin GPIO_PIN_4
#define C1_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_5
#define B1_GPIO_Port GPIOB
#define A1_Pin GPIO_PIN_6
#define A1_GPIO_Port GPIOB
#define G2_Pin GPIO_PIN_9
#define G2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
