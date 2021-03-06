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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents the output of a list deployment instances operation.</p>
   */
  class AWS_CODEDEPLOY_API ListDeploymentInstancesResult
  {
  public:
    ListDeploymentInstancesResult();
    ListDeploymentInstancesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDeploymentInstancesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of instances IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstancesList() const{ return m_instancesList; }

    /**
     * <p>A list of instances IDs.</p>
     */
    inline void SetInstancesList(const Aws::Vector<Aws::String>& value) { m_instancesList = value; }

    /**
     * <p>A list of instances IDs.</p>
     */
    inline void SetInstancesList(Aws::Vector<Aws::String>&& value) { m_instancesList = value; }

    /**
     * <p>A list of instances IDs.</p>
     */
    inline ListDeploymentInstancesResult& WithInstancesList(const Aws::Vector<Aws::String>& value) { SetInstancesList(value); return *this;}

    /**
     * <p>A list of instances IDs.</p>
     */
    inline ListDeploymentInstancesResult& WithInstancesList(Aws::Vector<Aws::String>&& value) { SetInstancesList(value); return *this;}

    /**
     * <p>A list of instances IDs.</p>
     */
    inline ListDeploymentInstancesResult& AddInstancesList(const Aws::String& value) { m_instancesList.push_back(value); return *this; }

    /**
     * <p>A list of instances IDs.</p>
     */
    inline ListDeploymentInstancesResult& AddInstancesList(Aws::String&& value) { m_instancesList.push_back(value); return *this; }

    /**
     * <p>A list of instances IDs.</p>
     */
    inline ListDeploymentInstancesResult& AddInstancesList(const char* value) { m_instancesList.push_back(value); return *this; }

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline ListDeploymentInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline ListDeploymentInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of information that is returned is significantly large, an
     * identifier will also be returned, which can be used in a subsequent list
     * deployment instances call to return the next set of deployment instances in the
     * list.</p>
     */
    inline ListDeploymentInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instancesList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
