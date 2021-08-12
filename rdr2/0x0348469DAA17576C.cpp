// beat_moonshine_camp.ysc @ L2921
void func_74(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_297[0 /*32*/].f_11))
  {
    PHYSICS::_0x0348469DAA17576C(Local_297[0 /*32*/].f_11);
    if (PED::_GET_RIDER_OF_MOUNT(Local_297[0 /*32*/].f_11, false) != Global_35)
    {
      TASK::TASK_SMART_FLEE_PED(Local_297[0 /*32*/].f_11, Global_35, 500f, -1, 256, 3f, 0);
      if (bParam0)
      {
        PED::SET_PED_KEEP_TASK(Local_297[0 /*32*/].f_11, true);
      }
    }
    PED::_0x39A2FC5AF55A52B1(Local_297[0 /*32*/].f_11, -1);
    ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_297[0 /*32*/].f_11));
  }
}