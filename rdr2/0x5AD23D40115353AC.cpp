// act_caunc_rustling_invite.ysc @ L6279
void func_197(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, float fParam5)
{
  float fVar0;

  if (ENTITY::IS_ENTITY_DEAD(*iParam2))
  {
    return;
  }
  fVar0 = func_193(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam2, true, false)));
  if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
  {
    if (!func_156(Global_35, -875674219))
    {
      TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam2, 5000, -1f, -1f, -1f);
    }
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
  }
  if (MISC::IS_BIT_SET(iParam0->f_21, 5))
  {
    PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
  }
  PED::SET_PED_RESET_FLAG(Global_35, 264, true);
  if (bParam3 == 0)
  {
    func_409(iParam0, uParam1, iParam2, sParam4);
  }
  if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
  {
    PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *iParam2, "ForcedILO", 0f, 0f, 0f, *iParam2, 0);
    MISC::SET_BIT(&(iParam0->f_21), 5);
  }
}