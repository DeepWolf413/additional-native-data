// appcamera.ysc @ L7734
void func_83(float fParam0)
{
  fLocal_158 = (fLocal_158 + fParam0);
  if (fLocal_158 > 1.5f)
  {
    fLocal_158 = 1.5f;
  }
  else if (fLocal_158 < 0.5f)
  {
    fLocal_158 = 0.5f;
  }
  MOBILE::_0x3117D84EFA60F77B(fLocal_158);
}