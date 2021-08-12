// beat_bounty_transport.ysc @ L5585
void func_140()
{
  vector3 vVar0;
  vector3 vVar3;

  if (!func_31(4096))
  {
    if (iLocal_73 != 7)
    {
      if (!ENTITY::IS_ENTITY_DEAD(Local_805[0 /*32*/].f_11))
      {
        vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_805[0 /*32*/].f_11, true, false) };
        TASK::TASK_WANDER_IN_AREA(Local_805[0 /*32*/].f_11, vVar0, 20f, 3.5f, 3.5f, 0);
        func_33(4096);
      }
    }
  }
  if (!func_31(8192))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_805[1 /*32*/].f_11))
    {
      vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_805[1 /*32*/].f_11, true, false) };
      TASK::TASK_WANDER_IN_AREA(Local_805[1 /*32*/].f_11, vVar3, 20f, 0.5f, 0.7f, 0);
      func_33(8192);
    }
  }
}