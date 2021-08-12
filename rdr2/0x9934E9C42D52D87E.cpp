// ambush_inb_bridge_ambush.ysc @ L8164
void func_303()
{
  if (func_139(&Local_274, 512))
  {
    return;
  }
  if (Local_274.f_5 >= 2)
  {
    if (func_61(Local_15[2], 0, 0))
    {
      if ((func_152(Local_15[2], Global_36, 0) < 9f || func_280(Local_274.f_58[0 /*3*/], Local_274.f_58[1 /*3*/], ENTITY::GET_ENTITY_COORDS(Local_15[2], true, false))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_15[2]))
      {
        TASK::CLEAR_PED_TASKS(Local_15[2], true, false);
        TASK::TASK_COMBAT_PED(Local_15[2], Global_35, 0, 0);
        func_285(&Local_15, 2, joaat("BLIP_STYLE_ENEMY"), 0);
        PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[2], 45, true);
        func_141(&Local_274, 512);
      }
    }
  }
}