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
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define led_red_Pin GPIO_PIN_5
#define led_red_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_6
#define en1_GPIO_Port GPIOA
#define en2_Pin GPIO_PIN_7
#define en2_GPIO_Port GPIOA
#define chana_Pin GPIO_PIN_0
#define chana_GPIO_Port GPIOB
#define chanb_Pin GPIO_PIN_1
#define chanb_GPIO_Port GPIOB
#define chanc_Pin GPIO_PIN_2
#define chanc_GPIO_Port GPIOB
#define en3_Pin GPIO_PIN_8
#define en3_GPIO_Port GPIOA
#define en4_Pin GPIO_PIN_9
#define en4_GPIO_Port GPIOA
#define chand_Pin GPIO_PIN_3
#define chand_GPIO_Port GPIOB
#define chane_Pin GPIO_PIN_4
#define chane_GPIO_Port GPIOB
#define chanf_Pin GPIO_PIN_5
#define chanf_GPIO_Port GPIOB
#define chang_Pin GPIO_PIN_6
#define chang_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
