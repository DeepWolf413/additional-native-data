// braithwaites2.ysc @ L56880
void func_1385(var uParam0)
{
  if (((((ENTITY::DOES_ENTITY_EXIST(bLocal_7479) && !PED::IS_PED_ON_MOUNT(Global_35)) && (TASK::GET_SCRIPT_TASK_STATUS(bLocal_7479, 1056466932, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(bLocal_7479, 1056466932, true) != 1)) && (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1868526510, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1868526510, true) != 1)) && (func_1256(uParam0) > 3 || func_1256(uParam0) == -1)) && func_894(Global_35, bLocal_7479, 1, 1) > 3f)
  {
    TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(bLocal_7479, Global_35, 0f, -3f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
  }
  else if ((ENTITY::DOES_ENTITY_EXIST(bLocal_7479) && func_894(Global_35, bLocal_7479, 1, 1) <= 3f) && func_1395(bLocal_7479, 1056466932))
  {
    TASK::CLEAR_PED_TASKS(bLocal_7479, true, false);
  }
  if (func_1931(Global_35) && func_1932(Global_35))
  {
    if (PED::_0x42688E94E96FD9B4(bLocal_7479, 3, 0) < 0.8f)
    {
      PED::_0x06D26A96CA1BCA75(bLocal_7479, 3, 1f, 0);
    }
  }
}