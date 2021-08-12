// am_mp_arcade.ysc @ L350356
void func_5657(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
  int iVar0;
  
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return;
  }
  iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_192)));
  fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_192)));
  bVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_192)) / 4f)) * 4;
  fParam5 = (SYSTEM::TO_FLOAT(bVar0) * (1f / IntToFloat(iLocal_192)));
  GRAPHICS::_0x2D3B147AFAD49DE0(sParam0, sParam1, func_5658(fParam2), fParam3, (fParam4 * fLocal_190), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}