// rcm_dutch21.ysc @ L24094
bool func_777(int iParam0, var uParam1)
{
  if (func_1267(iParam0))
  {
    switch (*uParam1)
    {
      case 0:
        Local_262.f_61[0] = func_589(joaat("A_C_ALLIGATOR_01"), 1908.383f, -1799.175f, 41f, -162.5874f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
        TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_262.f_61[0], true);
        TASK::_0x9DE63896B176EA94(Local_262.f_61[0], 1);
        TASK::_0xC6170856E54557B2(Local_262.f_61[0], 1, 1065353216 /* Float: 1f */);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_61[0], true);
        TASK::TASK_GO_STRAIGHT_TO_COORD(Local_262.f_61[0], 1925.745f, -1826.988f, 41.1531f, 1f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
        *uParam1 = 1;
        break;
      case 1:
        if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_262.f_61[0], Global_35, 1, 1) || TASK::GET_SCRIPT_TASK_STATUS(Local_262.f_61[0], 2106541073, true) == 8)
        {
          PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_61[0], false);
          return true;
        }
        break;
    }
  }
  return false;
}