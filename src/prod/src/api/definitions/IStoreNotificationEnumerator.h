// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once 

namespace Api
{
    class IStoreNotificationEnumerator : public IStoreItemEnumerator
    {
    public:
        virtual ~IStoreNotificationEnumerator() {};

        virtual void Reset() = 0;
    };
}