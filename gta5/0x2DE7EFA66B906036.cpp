// appchecklist.ysc @ L468
void func_15()
{
  if (Global_19776 == 0)
  {
    if (func_9(2, Global_19767, 0))
    {
      func_12();
      Global_19776 = 1;
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19779, "GET_CURRENT_SELECTION");
      iLocal_129 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_129))
      {
        SYSTEM::WAIT(0);
      }
      iLocal_128 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_129);
      if (Global_19798.f_1 > 3)
      {
        Global_19798.f_1 = 8;
        if (iLocal_128 == 0)
        {
          iLocal_119 = 1;
          func_16();
        }
        else
        {
          iLocal_119 = 2;
          func_4();
        }
      }
    }
  }
}