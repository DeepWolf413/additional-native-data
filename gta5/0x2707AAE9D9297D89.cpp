// fm_race_creator.ysc @ L493191
void func_8471(int iParam0, int iParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  float fVar2;
  
  fVar0 = 9.5f;
  fVar1 = 9.5f;
  fVar2 = 100f;
  if (func_9212() || func_941(iParam1, bParam2))
  {
    fVar0 = 16f;
    fVar1 = 16f;
  }
  if ((!bParam2 && MISC::IS_BIT_SET(Global_4456448.f_71548[iParam1], 20)) || (bParam2 && MISC::IS_BIT_SET(Global_4456448.f_71548[iParam1], 21)))
  {
    fVar1 = 250f;
    if (bParam2)
    {
      fVar2 = Global_4456448.f_74828[iParam1];
    }
    else
    {
      fVar2 = Global_4456448.f_74725[iParam1];
    }
  }
  GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0, fVar0, fVar1, fVar2);
}