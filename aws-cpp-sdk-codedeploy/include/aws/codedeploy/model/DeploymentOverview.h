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
   * <p>Information about the deployment status of the instances in the
   * deployment.</p>
   */
  class AWS_CODEDEPLOY_API DeploymentOverview
  {
  public:
    DeploymentOverview();
    DeploymentOverview(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentOverview& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The number of instances that are pending in the deployment.</p>
     */
    inline long long GetPending() const{ return m_pending; }

    /**
     * <p>The number of instances that are pending in the deployment.</p>
     */
    inline void SetPending(long long value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The number of instances that are pending in the deployment.</p>
     */
    inline DeploymentOverview& WithPending(long long value) { SetPending(value); return *this;}

    /**
     * <p>The number of instances that are in progress in the deployment.</p>
     */
    inline long long GetInProgress() const{ return m_inProgress; }

    /**
     * <p>The number of instances that are in progress in the deployment.</p>
     */
    inline void SetInProgress(long long value) { m_inProgressHasBeenSet = true; m_inProgress = value; }

    /**
     * <p>The number of instances that are in progress in the deployment.</p>
     */
    inline DeploymentOverview& WithInProgress(long long value) { SetInProgress(value); return *this;}

    /**
     * <p>The number of instances that have succeeded in the deployment.</p>
     */
    inline long long GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The number of instances that have succeeded in the deployment.</p>
     */
    inline void SetSucceeded(long long value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    /**
     * <p>The number of instances that have succeeded in the deployment.</p>
     */
    inline DeploymentOverview& WithSucceeded(long long value) { SetSucceeded(value); return *this;}

    /**
     * <p>The number of instances that have failed in the deployment.</p>
     */
    inline long long GetFailed() const{ return m_failed; }

    /**
     * <p>The number of instances that have failed in the deployment.</p>
     */
    inline void SetFailed(long long value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The number of instances that have failed in the deployment.</p>
     */
    inline DeploymentOverview& WithFailed(long long value) { SetFailed(value); return *this;}

    /**
     * <p>The number of instances that have been skipped in the deployment.</p>
     */
    inline long long GetSkipped() const{ return m_skipped; }

    /**
     * <p>The number of instances that have been skipped in the deployment.</p>
     */
    inline void SetSkipped(long long value) { m_skippedHasBeenSet = true; m_skipped = value; }

    /**
     * <p>The number of instances that have been skipped in the deployment.</p>
     */
    inline DeploymentOverview& WithSkipped(long long value) { SetSkipped(value); return *this;}

  private:
    long long m_pending;
    bool m_pendingHasBeenSet;
    long long m_inProgress;
    bool m_inProgressHasBeenSet;
    long long m_succeeded;
    bool m_succeededHasBeenSet;
    long long m_failed;
    bool m_failedHasBeenSet;
    long long m_skipped;
    bool m_skippedHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
