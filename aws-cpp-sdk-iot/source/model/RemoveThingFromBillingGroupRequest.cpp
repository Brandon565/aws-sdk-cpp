﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/RemoveThingFromBillingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveThingFromBillingGroupRequest::RemoveThingFromBillingGroupRequest() : 
    m_billingGroupNameHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

Aws::String RemoveThingFromBillingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_billingGroupNameHasBeenSet)
  {
   payload.WithString("billingGroupName", m_billingGroupName);

  }

  if(m_billingGroupArnHasBeenSet)
  {
   payload.WithString("billingGroupArn", m_billingGroupArn);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  return payload.View().WriteReadable();
}




