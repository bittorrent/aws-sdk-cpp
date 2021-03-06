/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class AWS_SES_API CreateReceiptRuleSetRequest : public SESRequest
  {
  public:
    CreateReceiptRuleSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CreateReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CreateReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CreateReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
