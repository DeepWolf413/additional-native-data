// sadie4.ysc @ L50222
void func_1227(var uParam0)
{
  switch (Local_109.f_7)
  {
    case 0:
      ENTITY::_0x18FF3110CF47115D(Local_109, 1, 0);
      ENTITY::_0x18FF3110CF47115D(Local_109, 4, 0);
      ENTITY::_0x18FF3110CF47115D(Local_109, 2, 1);
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_109, 1);
      if (!func_1214(Local_109, joaat("SCRIPT_TASK_CARRIABLE")))
      {
        TASK::CLEAR_PED_TASKS(Local_109, true, false);
        TASK::TASK_CARRIABLE(Local_109, joaat("HOGTIED_PED"), Local_47.f_1, 5, 0);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_109, joaat("REL_PLAYER_ALLY"));
        PED::_0x2208438012482A1A(Local_109, false, false);
      }
      if (!PED::_0x5DA36CCCB63C0895(Local_109, 1, 1))
      {
        PED::_0x3FDBB99EFD8CE4AF(Local_109, 1, 1);
      }
      func_1630(&Local_109, 19);
      break;
    case 19:
      if (!func_1214(Local_109, joaat("SCRIPT_TASK_CARRIABLE")))
      {
        TASK::TASK_CARRIABLE(Local_109, joaat("HOGTIED_PED"), Local_47.f_1, 5, 0);
      }
      break;
  }
}