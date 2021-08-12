// appcamera.ysc @ L7544
void func_77(float fParam0)
{
  fLocal_161 = (fLocal_161 + fParam0);
  if (fLocal_161 > 1f)
  {
    fLocal_161 = 1f;
  }
  else if (fLocal_161 < -1f)
  {
    fLocal_161 = -1f;
  }
  MOBILE::_0xD6ADE981781FCA09(fLocal_161);
}