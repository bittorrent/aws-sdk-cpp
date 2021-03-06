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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TriggerEventType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about notification triggers for the deployment group.</p>
   */
  class AWS_CODEDEPLOY_API TriggerConfig
  {
  public:
    TriggerConfig();
    TriggerConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    TriggerConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline const Aws::String& GetTriggerName() const{ return m_triggerName; }

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline void SetTriggerName(const Aws::String& value) { m_triggerNameHasBeenSet = true; m_triggerName = value; }

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline void SetTriggerName(Aws::String&& value) { m_triggerNameHasBeenSet = true; m_triggerName = value; }

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline void SetTriggerName(const char* value) { m_triggerNameHasBeenSet = true; m_triggerName.assign(value); }

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline TriggerConfig& WithTriggerName(const Aws::String& value) { SetTriggerName(value); return *this;}

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline TriggerConfig& WithTriggerName(Aws::String&& value) { SetTriggerName(value); return *this;}

    /**
     * <para>The name of the notification trigger.</para>
     */
    inline TriggerConfig& WithTriggerName(const char* value) { SetTriggerName(value); return *this;}

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline const Aws::String& GetTriggerTargetArn() const{ return m_triggerTargetArn; }

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(const Aws::String& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = value; }

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(Aws::String&& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = value; }

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(const char* value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn.assign(value); }

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(const Aws::String& value) { SetTriggerTargetArn(value); return *this;}

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(Aws::String&& value) { SetTriggerTargetArn(value); return *this;}

    /**
     * <p>The arn of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(const char* value) { SetTriggerTargetArn(value); return *this;}

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline const Aws::Vector<TriggerEventType>& GetTriggerEvents() const{ return m_triggerEvents; }

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline void SetTriggerEvents(const Aws::Vector<TriggerEventType>& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = value; }

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline void SetTriggerEvents(Aws::Vector<TriggerEventType>&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = value; }

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline TriggerConfig& WithTriggerEvents(const Aws::Vector<TriggerEventType>& value) { SetTriggerEvents(value); return *this;}

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline TriggerConfig& WithTriggerEvents(Aws::Vector<TriggerEventType>&& value) { SetTriggerEvents(value); return *this;}

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline TriggerConfig& AddTriggerEvents(const TriggerEventType& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(value); return *this; }

    /**
     * <p>The event type or types for which notifications are triggered.</p> <p>The
     * following event type values are supported:</p> <ul> <li>DEPLOYMENT_START</li>
     * <li>DEPLOYMENT_SUCCESS</li> <li>DEPLOYMENT_FAILURE</li> <li>DEPLOYMENT_STOP</li>
     * <li>INSTANCE_START</li> <li>INSTANCE_SUCCESS</li> <li>INSTANCE_FAILURE</li>
     * </ul>
     */
    inline TriggerConfig& AddTriggerEvents(TriggerEventType&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(value); return *this; }

  private:
    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet;
    Aws::String m_triggerTargetArn;
    bool m_triggerTargetArnHasBeenSet;
    Aws::Vector<TriggerEventType> m_triggerEvents;
    bool m_triggerEventsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
