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
#include <aws/inspector/model/LocalizedTextKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LocalizedTextKey::LocalizedTextKey() : 
    m_facilityHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

LocalizedTextKey::LocalizedTextKey(const JsonValue& jsonValue) : 
    m_facilityHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

LocalizedTextKey& LocalizedTextKey::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("facility"))
  {
    m_facility = jsonValue.GetString("facility");

    m_facilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalizedTextKey::Jsonize() const
{
  JsonValue payload;

  if(m_facilityHasBeenSet)
  {
   payload.WithString("facility", m_facility);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}