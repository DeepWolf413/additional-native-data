// appcamera.ysc @ L9671
void func_121(bool bParam0)
{
  if (func_170())
  {
    if (bParam0)
    {
      if (!GRAPHICS::_0xBCEDB009461DA156())
      {
        GRAPHICS::_0x7AC24EAB6D74118D(true);
        if (Global_4271204 > 0 && Global_4271204 < 99)
        {
          GRAPHICS::_0x27FEB5254759CDE3(sLocal_33[Global_4271204], false);
          MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
        }
      }
    }
    else if (GRAPHICS::_0xBCEDB009461DA156())
    {
      GRAPHICS::_0x7AC24EAB6D74118D(false);
    }
  }
}