/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/SslConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SslConfiguration::SslConfiguration() : 
    m_chainHasBeenSet(false)
{
}

SslConfiguration::SslConfiguration(const JsonValue& jsonValue) : 
    m_chainHasBeenSet(false)
{
  *this = jsonValue;
}

SslConfiguration& SslConfiguration::operator =(const JsonValue& jsonValue)
{
  m_certificate = jsonValue.GetString("Certificate");

  m_privateKey = jsonValue.GetString("PrivateKey");

  if(jsonValue.ValueExists("Chain"))
  {
    m_chain = jsonValue.GetString("Chain");

    m_chainHasBeenSet = true;
  }

  return *this;
}

JsonValue SslConfiguration::Jsonize() const
{
  JsonValue payload;

  payload.WithString("Certificate", m_certificate);

  payload.WithString("PrivateKey", m_privateKey);

  if(m_chainHasBeenSet)
  {
   payload.WithString("Chain", m_chain);

  }

  return std::move(payload);
}