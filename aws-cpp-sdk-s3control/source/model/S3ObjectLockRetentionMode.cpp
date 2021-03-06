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

#include <aws/s3control/model/S3ObjectLockRetentionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3ObjectLockRetentionModeMapper
      {

        static const int COMPLIANCE_HASH = HashingUtils::HashString("COMPLIANCE");
        static const int GOVERNANCE_HASH = HashingUtils::HashString("GOVERNANCE");


        S3ObjectLockRetentionMode GetS3ObjectLockRetentionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLIANCE_HASH)
          {
            return S3ObjectLockRetentionMode::COMPLIANCE;
          }
          else if (hashCode == GOVERNANCE_HASH)
          {
            return S3ObjectLockRetentionMode::GOVERNANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectLockRetentionMode>(hashCode);
          }

          return S3ObjectLockRetentionMode::NOT_SET;
        }

        Aws::String GetNameForS3ObjectLockRetentionMode(S3ObjectLockRetentionMode enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectLockRetentionMode::COMPLIANCE:
            return "COMPLIANCE";
          case S3ObjectLockRetentionMode::GOVERNANCE:
            return "GOVERNANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectLockRetentionModeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
