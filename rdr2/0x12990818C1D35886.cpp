// act_fishing01.ysc @ L20439
void func_566()
{
  if (!func_75(Local_195.f_95, 2048))
  {
    if (!func_67(&uLocal_1558))
    {
      func_576(0);
      func_60(&uLocal_1558, 0);
    }
    if (func_215(&uLocal_1558, 1.25f) && func_569(Local_195.f_37, 0) != joaat("WEAPON_FISHINGROD"))
    {
      TASK::OPEN_SEQUENCE_TASK(&iLocal_1564);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_532(2, 5), (1f + 0.5f), -1, 5f, 0, func_558(2, 5));
      TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_1564);
      TASK::TASK_PERFORM_SEQUENCE(Local_195.f_37, iLocal_1564);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_1564);
      PED::_0x2208438012482A1A(Local_195.f_37, false, false);
      TASK::_0x12990818C1D35886(Local_195.f_37, 0, 1065353216 /* Float: 1f */);
      func_221(&(Local_195.f_95), 2048);
    }
  }
}