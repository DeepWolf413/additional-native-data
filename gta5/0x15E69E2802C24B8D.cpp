// appcamera.ysc @ L7720
void func_82(float fParam0)
{
  fLocal_160 = (fLocal_160 + fParam0);
  if (fLocal_160 > 1f)
  {
    fLocal_160 = 1f;
  }
  else if (fLocal_160 < -1f)
  {
    fLocal_160 = -1f;
  }
  MOBILE::_0x15E69E2802C24B8D(fLocal_160);
}