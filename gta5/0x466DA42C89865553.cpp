// appcamera.ysc @ L7572
void func_79(float fParam0)
{
  fLocal_163 = (fLocal_163 + fParam0);
  if (fLocal_163 > 1f)
  {
    fLocal_163 = 1f;
  }
  else if (fLocal_163 < -1f)
  {
    fLocal_163 = -1f;
  }
  MOBILE::_0x466DA42C89865553(fLocal_163);
}