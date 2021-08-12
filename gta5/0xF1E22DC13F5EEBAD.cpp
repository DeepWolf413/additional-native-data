// appcamera.ysc @ L7558
void func_78(float fParam0)
{
  fLocal_162 = (fLocal_162 + fParam0);
  if (fLocal_162 > 1f)
  {
    fLocal_162 = 1f;
  }
  else if (fLocal_162 < -1f)
  {
    fLocal_162 = -1f;
  }
  MOBILE::_0xF1E22DC13F5EEBAD(fLocal_162);
}