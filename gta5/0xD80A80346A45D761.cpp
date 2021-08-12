// appbunkerbusiness.ysc @ L19355
void func_463()
{
  bool bVar0;
  struct<4> Var1;
  char* sVar5;
  
  if (MISC::IS_BIT_SET(iLocal_124, 11))
  {
    if (!MISC::IS_BIT_SET(iLocal_124, 12))
    {
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_317, "APP_IS_DEACTIVATED");
      iLocal_320 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      MISC::SET_BIT(&iLocal_124, 12);
    }
    else if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_320))
    {
      bVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(iLocal_320);
      if (bVar0)
      {
        MISC::SET_BIT(&iLocal_124, 11);
      }
      else
      {
        MISC::CLEAR_BIT(&iLocal_124, 11);
        Var1 = { func_425(iLocal_142, 0) };
        MemCopy(&sVar5, {func_426(iLocal_142, 0)}, 4);
        func_460(1);
        func_251(&Var1, "WHOUSE_CONF", "", 0, 0, -1, 0, &sVar5, "UA_FT_TITLE");
      }
      MISC::CLEAR_BIT(&iLocal_124, 12);
    }
  }
}