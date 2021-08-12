// appcamera.ysc @ L7706
void func_81(float fParam0)
{
  fLocal_159 = (fLocal_159 + fParam0);
  if (fLocal_159 > 1f)
  {
    fLocal_159 = 1f;
  }
  else if (fLocal_159 < 0f)
  {
    fLocal_159 = 0f;
  }
  MOBILE::_0xAC2890471901861C(fLocal_159);
}