// fbi4_prep1.ysc @ L5232
void func_164(var uParam0)
{
  if (!func_184(*uParam0, -71340211))
  {
    if (Local_134[iLocal_661 /*25*/].f_23 != 0)
    {
      if (func_10(Local_134[iLocal_661 /*25*/].f_17))
      {
        TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
      }
    }
    else
    {
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, false, func_165(Local_134[iLocal_661 /*25*/].f_19, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 1));
    }
    if (func_37(iLocal_109))
    {
      VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_109, 5, false, false);
    }
    uParam0->f_8 = uParam0->f_7;
    uParam0->f_7 = 9;
    uParam0->f_9 = 1;
  }
}