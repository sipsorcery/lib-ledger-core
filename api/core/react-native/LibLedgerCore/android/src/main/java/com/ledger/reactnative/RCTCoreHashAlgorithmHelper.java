// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto.djinni

package com.ledger.reactnative;

import co.ledger.core.HashAlgorithmHelper;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Optional;
import java.util.UUID;

/** Helper class for commonly used crypto algorithms */
public class RCTCoreHashAlgorithmHelper extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;
    private Map<String, HashAlgorithmHelperImpl> javaObjects;
    public Map<String, HashAlgorithmHelperImpl> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreHashAlgorithmHelper(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, HashAlgorithmHelperImpl>();
    }

    @Override
    public String getName()
    {
        return "RCTCoreHashAlgorithmHelper";
    }
    @ReactMethod
    public void newInstance(Promise promise)
    {
        HashAlgorithmHelperImpl newInstance = new HashAlgorithmHelperImpl(this.reactContext);
        String uuid = UUID.randomUUID().toString();
        this.javaObjects.put(uuid, newInstance);
        Map<String, String> finalResult = new HashMap<String, String>();
        finalResult.put("type","RCTCoreHashAlgorithmHelper");
        finalResult.put("uid",uuid);
        promise.resolve(finalResult);
    }
    @ReactMethod
    public void release(Map<String, String> currentInstance, Promise promise)
    {
        String uid = currentInstance.get("uid");
        if (uid.length() > 0)
        {
            this.javaObjects.remove(uid);
            promise.resolve(0);
        }
        else
        {
            promise.reject("Failed to release instance of RCTCoreHashAlgorithmHelper", "First parameter of RCTCoreHashAlgorithmHelper::release should be an instance of RCTCoreHashAlgorithmHelper");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        ArrayList<String> result = new ArrayList<String>();
        for (Map.Entry<String, HashAlgorithmHelperImpl> elem : this.javaObjects.entrySet())
        {
            result.add(elem.getKey());
        }
        promise.resolve(0);
    }
    @ReactMethod
    public void flush(Promise promise)
    {
        this.javaObjects.clear();
        promise.resolve(0);
    }

    /**
     *RACE Integrity Primitives Evaluation Message Digest (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 160 bits hashed message
     */
    @ReactMethod
    public void ripemd160(Map<String, String> currentInstance, byte[] data, Promise promise) {
        try
        {
            String sUid = currentInstance.get("uid");

            HashAlgorithmHelperImpl currentInstanceObj = this.javaObjects.get(sUid);

            byte[] javaResult = currentInstanceObj.ripemd160(data);
            Map<String, byte[]> result = new HashMap<String, byte[]>();
            result.put("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    /**
     *Secure Hash Algorithm (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    @ReactMethod
    public void sha256(Map<String, String> currentInstance, byte[] data, Promise promise) {
        try
        {
            String sUid = currentInstance.get("uid");

            HashAlgorithmHelperImpl currentInstanceObj = this.javaObjects.get(sUid);

            byte[] javaResult = currentInstanceObj.sha256(data);
            Map<String, byte[]> result = new HashMap<String, byte[]>();
            result.put("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
    /**
     *Hash algorithm used in ethereum
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    @ReactMethod
    public void keccak256(Map<String, String> currentInstance, byte[] data, Promise promise) {
        try
        {
            String sUid = currentInstance.get("uid");

            HashAlgorithmHelperImpl currentInstanceObj = this.javaObjects.get(sUid);

            byte[] javaResult = currentInstanceObj.keccak256(data);
            Map<String, byte[]> result = new HashMap<String, byte[]>();
            result.put("value", javaResult);

            promise.resolve(result);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
}
