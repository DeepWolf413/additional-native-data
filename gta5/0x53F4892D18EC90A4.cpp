// appcamera.ysc @ L7748
void func_84(float fParam0)
{
  fLocal_157 = (fLocal_157 + fParam0);
  if (fLocal_157 > 2f)
  {
    fLocal_157 = 2f;
  }
  else if (fLocal_157 < -1.7f)
  {
    fLocal_157 = -1.7f;
  }
  MOBILE::_0x53F4892D18EC90A4(fLocal_157);
}