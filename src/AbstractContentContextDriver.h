/*
 Source File : AbstractContentContextDriver.h
 
 
 Copyright 2013 Gal Kahana HummusJS
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */
#pragma once

#include <node.h>


class AbstractContentContext;
class ResourcesDictionary;

class AbstractContentContextDriver : public node::ObjectWrap
{
public:
    
    
    static void Init(v8::Handle<v8::FunctionTemplate>& ioDriverTemplate);
    
    
    void SetResourcesDictionary(ResourcesDictionary* inResourcesDictionary);

protected:
    AbstractContentContextDriver();
    
private:
    
    virtual AbstractContentContext* GetContext() = 0;
    ResourcesDictionary* mResourcesDictionary;
        
    static v8::Handle<v8::Value> q(const v8::Arguments& args);
    static v8::Handle<v8::Value> k(const v8::Arguments& args);
    static v8::Handle<v8::Value> re(const v8::Arguments& args);
    static v8::Handle<v8::Value> f(const v8::Arguments& args);
    static v8::Handle<v8::Value> Q(const v8::Arguments& args);
    static v8::Handle<v8::Value> G(const v8::Arguments& args);
    static v8::Handle<v8::Value> w(const v8::Arguments& args);
    static v8::Handle<v8::Value> m(const v8::Arguments& args);
    static v8::Handle<v8::Value> l(const v8::Arguments& args);
    static v8::Handle<v8::Value> S(const v8::Arguments& args);
    static v8::Handle<v8::Value> cm(const v8::Arguments& args);
    static v8::Handle<v8::Value> doXObject(const v8::Arguments& args);
    static v8::Handle<v8::Value> BT(const v8::Arguments& args);
    static v8::Handle<v8::Value> Tf(const v8::Arguments& args);
    static v8::Handle<v8::Value> Tm(const v8::Arguments& args);
    static v8::Handle<v8::Value> Tj(const v8::Arguments& args);
    static v8::Handle<v8::Value> ET(const v8::Arguments& args);
    static v8::Handle<v8::Value> rg(const v8::Arguments& args);
    
    
    
};