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
#include <aws/apigateway/model/PutMethodResponseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutMethodResponseResult::PutMethodResponseResult()
{
}

PutMethodResponseResult::PutMethodResponseResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutMethodResponseResult& PutMethodResponseResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonValue> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsBool();
    }
  }

  if(jsonValue.ValueExists("responseModels"))
  {
    Aws::Map<Aws::String, JsonValue> responseModelsJsonMap = jsonValue.GetObject("responseModels").GetAllObjects();
    for(auto& responseModelsItem : responseModelsJsonMap)
    {
      m_responseModels[responseModelsItem.first] = responseModelsItem.second.AsString();
    }
  }



  return *this;
}
