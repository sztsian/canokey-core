/**
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
#ifndef __USBD_IOREQ_H
#define __USBD_IOREQ_H

#include <usbd_core.h>
#include <usbd_def.h>

USBD_StatusTypeDef USBD_CtlSendData(USBD_HandleTypeDef *pdev, const uint8_t *buf, uint16_t len, uint8_t sender);
USBD_StatusTypeDef USBD_CtlContinueSendData(USBD_HandleTypeDef *pdev, const uint8_t *pbuf, uint16_t len);
USBD_StatusTypeDef USBD_CtlPrepareRx(USBD_HandleTypeDef *pdev, uint8_t *pbuf, uint16_t len);
USBD_StatusTypeDef USBD_CtlContinueRx(USBD_HandleTypeDef *pdev, uint8_t *pbuf, uint16_t len);
USBD_StatusTypeDef USBD_CtlSendStatus(USBD_HandleTypeDef *pdev);
USBD_StatusTypeDef USBD_CtlReceiveStatus(USBD_HandleTypeDef *pdev);
uint16_t USBD_GetRxCount(USBD_HandleTypeDef *pdev, uint8_t ep_addr);

#endif /* __USBD_IOREQ_H */
