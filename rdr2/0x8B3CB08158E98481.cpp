// rcm_mr_mayor1.ysc @ L9735
void func_332()
{
  if (!func_365(iLocal_207, 713668775))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_207))
    {
      if (ENTITY::GET_ENTITY_HEALTH(iLocal_207) > 50)
      {
        ENTITY::_SET_ENTITY_HEALTH(iLocal_207, 50, 0);
      }
      PED::_0x8B3CB08158E98481(iLocal_207, 1);
      PED::SET_PED_CONFIG_FLAG(iLocal_207, 336, true);
      PED::_0x89F5E7ADECCCB49C(iLocal_207, "injured_general");
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_207, vLocal_550, 1f, -1, 0.25f, 4194304, 40000f);
      func_717(iLocal_468, 6);
    }
  }
}