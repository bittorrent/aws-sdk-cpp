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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API ReplaceRouteTableAssociationResponse
  {
  public:
    ReplaceRouteTableAssociationResponse();
    ReplaceRouteTableAssociationResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ReplaceRouteTableAssociationResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ID of the new association.</p>
     */
    inline const Aws::String& GetNewAssociationId() const{ return m_newAssociationId; }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(const Aws::String& value) { m_newAssociationId = value; }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(Aws::String&& value) { m_newAssociationId = value; }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(const char* value) { m_newAssociationId.assign(value); }

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceRouteTableAssociationResponse& WithNewAssociationId(const Aws::String& value) { SetNewAssociationId(value); return *this;}

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceRouteTableAssociationResponse& WithNewAssociationId(Aws::String&& value) { SetNewAssociationId(value); return *this;}

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceRouteTableAssociationResponse& WithNewAssociationId(const char* value) { SetNewAssociationId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ReplaceRouteTableAssociationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ReplaceRouteTableAssociationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_newAssociationId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws