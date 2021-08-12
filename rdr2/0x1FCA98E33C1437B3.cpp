// abigail2_1.ysc @ L76441
bool func_2183(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 11)
  {
    if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1912[iVar0 /*10*/])) && func_2387(&(uParam0->f_1912[iVar0 /*10*/]), 2)) && !func_2387(&(uParam0->f_1912[iVar0 /*10*/]), 16)) && func_2419(uParam0, iVar0))
    {
      if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
      {
        uParam0->f_1912[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1912[iVar0 /*10*/]), 0, 0, false, true);
        ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
        return false;
      }
      else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
      {
        return false;
      }
      if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
      {
        func_2410(&(uParam0->f_1912[iVar0 /*10*/]), 32);
      }
      ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
      func_2410(&(uParam0->f_1912[iVar0 /*10*/]), 16);
    }
    iVar0++;
  }
  return true;
}