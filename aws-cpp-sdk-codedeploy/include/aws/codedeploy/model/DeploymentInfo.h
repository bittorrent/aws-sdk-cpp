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
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/codedeploy/model/ErrorInformation.h>
#include <aws/codedeploy/model/DeploymentOverview.h>
#include <aws/codedeploy/model/DeploymentCreator.h>

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
   * <p>Information about a deployment.</p>
   */
  class AWS_CODEDEPLOY_API DeploymentInfo
  {
  public:
    DeploymentInfo();
    DeploymentInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DeploymentInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The deployment group name.</p>
     */
    inline const Aws::String& GetDeploymentGroupName() const{ return m_deploymentGroupName; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(const Aws::String& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(Aws::String&& value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName = value; }

    /**
     * <p>The deployment group name.</p>
     */
    inline void SetDeploymentGroupName(const char* value) { m_deploymentGroupNameHasBeenSet = true; m_deploymentGroupName.assign(value); }

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(const Aws::String& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(Aws::String&& value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The deployment group name.</p>
     */
    inline DeploymentInfo& WithDeploymentGroupName(const char* value) { SetDeploymentGroupName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment ID.</p>
     */
    inline DeploymentInfo& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline DeploymentInfo& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline DeploymentInfo& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>Information about the location of application artifacts that are stored and
     * the service to retrieve them from.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p>Information about the location of application artifacts that are stored and
     * the service to retrieve them from.</p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Information about the location of application artifacts that are stored and
     * the service to retrieve them from.</p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>Information about the location of application artifacts that are stored and
     * the service to retrieve them from.</p>
     */
    inline DeploymentInfo& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p>Information about the location of application artifacts that are stored and
     * the service to retrieve them from.</p>
     */
    inline DeploymentInfo& WithRevision(RevisionLocation&& value) { SetRevision(value); return *this;}

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline DeploymentInfo& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the deployment as a whole.</p>
     */
    inline DeploymentInfo& WithStatus(DeploymentStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline const ErrorInformation& GetErrorInformation() const{ return m_errorInformation; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline void SetErrorInformation(const ErrorInformation& value) { m_errorInformationHasBeenSet = true; m_errorInformation = value; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline void SetErrorInformation(ErrorInformation&& value) { m_errorInformationHasBeenSet = true; m_errorInformation = value; }

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline DeploymentInfo& WithErrorInformation(const ErrorInformation& value) { SetErrorInformation(value); return *this;}

    /**
     * <p>Information about any error associated with this deployment.</p>
     */
    inline DeploymentInfo& WithErrorInformation(ErrorInformation&& value) { SetErrorInformation(value); return *this;}

    /**
     * <p>A timestamp indicating when the deployment was created.</p>
     */
    inline double GetCreateTime() const{ return m_createTime; }

    /**
     * <p>A timestamp indicating when the deployment was created.</p>
     */
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>A timestamp indicating when the deployment was created.</p>
     */
    inline DeploymentInfo& WithCreateTime(double value) { SetCreateTime(value); return *this;}

    /**
     * <p>A timestamp indicating when the deployment began deploying to the deployment
     * group.</p> <p>Note that in some cases, the reported value of the start time may
     * be later than the complete time. This is due to differences in the clock
     * settings of various back-end servers that participate in the overall deployment
     * process.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp indicating when the deployment began deploying to the deployment
     * group.</p> <p>Note that in some cases, the reported value of the start time may
     * be later than the complete time. This is due to differences in the clock
     * settings of various back-end servers that participate in the overall deployment
     * process.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp indicating when the deployment began deploying to the deployment
     * group.</p> <p>Note that in some cases, the reported value of the start time may
     * be later than the complete time. This is due to differences in the clock
     * settings of various back-end servers that participate in the overall deployment
     * process.</p>
     */
    inline DeploymentInfo& WithStartTime(double value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp indicating when the deployment was completed.</p>
     */
    inline double GetCompleteTime() const{ return m_completeTime; }

    /**
     * <p>A timestamp indicating when the deployment was completed.</p>
     */
    inline void SetCompleteTime(double value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }

    /**
     * <p>A timestamp indicating when the deployment was completed.</p>
     */
    inline DeploymentInfo& WithCompleteTime(double value) { SetCompleteTime(value); return *this;}

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline const DeploymentOverview& GetDeploymentOverview() const{ return m_deploymentOverview; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline void SetDeploymentOverview(const DeploymentOverview& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = value; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline void SetDeploymentOverview(DeploymentOverview&& value) { m_deploymentOverviewHasBeenSet = true; m_deploymentOverview = value; }

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentOverview(const DeploymentOverview& value) { SetDeploymentOverview(value); return *this;}

    /**
     * <p>A summary of the deployment status of the instances in the deployment.</p>
     */
    inline DeploymentInfo& WithDeploymentOverview(DeploymentOverview&& value) { SetDeploymentOverview(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A comment about the deployment.</p>
     */
    inline DeploymentInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline DeploymentInfo& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A comment about the deployment.</p>
     */
    inline DeploymentInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>How the deployment was created:</p> <ul> <li>user: A user created the
     * deployment.</li> <li>autoscaling: Auto Scaling created the deployment.</li>
     * </ul>
     */
    inline const DeploymentCreator& GetCreator() const{ return m_creator; }

    /**
     * <p>How the deployment was created:</p> <ul> <li>user: A user created the
     * deployment.</li> <li>autoscaling: Auto Scaling created the deployment.</li>
     * </ul>
     */
    inline void SetCreator(const DeploymentCreator& value) { m_creatorHasBeenSet = true; m_creator = value; }

    /**
     * <p>How the deployment was created:</p> <ul> <li>user: A user created the
     * deployment.</li> <li>autoscaling: Auto Scaling created the deployment.</li>
     * </ul>
     */
    inline void SetCreator(DeploymentCreator&& value) { m_creatorHasBeenSet = true; m_creator = value; }

    /**
     * <p>How the deployment was created:</p> <ul> <li>user: A user created the
     * deployment.</li> <li>autoscaling: Auto Scaling created the deployment.</li>
     * </ul>
     */
    inline DeploymentInfo& WithCreator(const DeploymentCreator& value) { SetCreator(value); return *this;}

    /**
     * <p>How the deployment was created:</p> <ul> <li>user: A user created the
     * deployment.</li> <li>autoscaling: Auto Scaling created the deployment.</li>
     * </ul>
     */
    inline DeploymentInfo& WithCreator(DeploymentCreator&& value) { SetCreator(value); return *this;}

    /**
     * <p>If true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to a specific instance, the deployment will not be
     * considered to have failed to that instance at that point and will continue on to
     * the BeforeInstall deployment lifecycle event.</p> <p>If false or not specified,
     * then if the deployment causes the ApplicationStop deployment lifecycle event to
     * fail to a specific instance, the deployment will stop to that instance, and the
     * deployment to that instance will be considered to have failed.</p>
     */
    inline bool GetIgnoreApplicationStopFailures() const{ return m_ignoreApplicationStopFailures; }

    /**
     * <p>If true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to a specific instance, the deployment will not be
     * considered to have failed to that instance at that point and will continue on to
     * the BeforeInstall deployment lifecycle event.</p> <p>If false or not specified,
     * then if the deployment causes the ApplicationStop deployment lifecycle event to
     * fail to a specific instance, the deployment will stop to that instance, and the
     * deployment to that instance will be considered to have failed.</p>
     */
    inline void SetIgnoreApplicationStopFailures(bool value) { m_ignoreApplicationStopFailuresHasBeenSet = true; m_ignoreApplicationStopFailures = value; }

    /**
     * <p>If true, then if the deployment causes the ApplicationStop deployment
     * lifecycle event to fail to a specific instance, the deployment will not be
     * considered to have failed to that instance at that point and will continue on to
     * the BeforeInstall deployment lifecycle event.</p> <p>If false or not specified,
     * then if the deployment causes the ApplicationStop deployment lifecycle event to
     * fail to a specific instance, the deployment will stop to that instance, and the
     * deployment to that instance will be considered to have failed.</p>
     */
    inline DeploymentInfo& WithIgnoreApplicationStopFailures(bool value) { SetIgnoreApplicationStopFailures(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_deploymentGroupName;
    bool m_deploymentGroupNameHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    RevisionLocation m_revision;
    bool m_revisionHasBeenSet;
    DeploymentStatus m_status;
    bool m_statusHasBeenSet;
    ErrorInformation m_errorInformation;
    bool m_errorInformationHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
    double m_startTime;
    bool m_startTimeHasBeenSet;
    double m_completeTime;
    bool m_completeTimeHasBeenSet;
    DeploymentOverview m_deploymentOverview;
    bool m_deploymentOverviewHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    DeploymentCreator m_creator;
    bool m_creatorHasBeenSet;
    bool m_ignoreApplicationStopFailures;
    bool m_ignoreApplicationStopFailuresHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
