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
#include <aws/elasticache/model/ModifyCacheClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyCacheClusterRequest::ModifyCacheClusterRequest() : 
    m_cacheClusterIdHasBeenSet(false),
    m_numCacheNodes(0),
    m_numCacheNodesHasBeenSet(false),
    m_cacheNodeIdsToRemoveHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_newAvailabilityZonesHasBeenSet(false),
    m_cacheSecurityGroupNamesHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_notificationTopicArnHasBeenSet(false),
    m_cacheParameterGroupNameHasBeenSet(false),
    m_notificationTopicStatusHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false)
{
}

Aws::String ModifyCacheClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCacheCluster&";
  if(m_cacheClusterIdHasBeenSet)
  {
    ss << "CacheClusterId=" << StringUtils::URLEncode(m_cacheClusterId.c_str()) << "&";
  }
  if(m_numCacheNodesHasBeenSet)
  {
    ss << "NumCacheNodes=" << m_numCacheNodes << "&";
  }
  if(m_cacheNodeIdsToRemoveHasBeenSet)
  {
    unsigned cacheNodeIdsToRemoveCount = 1;
    for(auto& item : m_cacheNodeIdsToRemove)
    {
      ss << "CacheNodeIdsToRemove.member." << cacheNodeIdsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheNodeIdsToRemoveCount++;
    }
  }
  if(m_aZModeHasBeenSet)
  {
    ss << "AZMode=" << AZModeMapper::GetNameForAZMode(m_aZMode) << "&";
  }
  if(m_newAvailabilityZonesHasBeenSet)
  {
    unsigned newAvailabilityZonesCount = 1;
    for(auto& item : m_newAvailabilityZones)
    {
      ss << "NewAvailabilityZones.member." << newAvailabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      newAvailabilityZonesCount++;
    }
  }
  if(m_cacheSecurityGroupNamesHasBeenSet)
  {
    unsigned cacheSecurityGroupNamesCount = 1;
    for(auto& item : m_cacheSecurityGroupNames)
    {
      ss << "CacheSecurityGroupNames.member." << cacheSecurityGroupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      cacheSecurityGroupNamesCount++;
    }
  }
  if(m_securityGroupIdsHasBeenSet)
  {
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupIds.member." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
    }
  }
  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }
  if(m_notificationTopicArnHasBeenSet)
  {
    ss << "NotificationTopicArn=" << StringUtils::URLEncode(m_notificationTopicArn.c_str()) << "&";
  }
  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }
  if(m_notificationTopicStatusHasBeenSet)
  {
    ss << "NotificationTopicStatus=" << StringUtils::URLEncode(m_notificationTopicStatus.c_str()) << "&";
  }
  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << m_applyImmediately << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << m_autoMinorVersionUpgrade << "&";
  }
  if(m_snapshotRetentionLimitHasBeenSet)
  {
    ss << "SnapshotRetentionLimit=" << m_snapshotRetentionLimit << "&";
  }
  if(m_snapshotWindowHasBeenSet)
  {
    ss << "SnapshotWindow=" << StringUtils::URLEncode(m_snapshotWindow.c_str()) << "&";
  }
  ss << "Version=2015-02-02";
  return ss.str();
}

