// rcm_dutch31.ysc @ L52462
void func_1386(int iParam0, vector3 vParam1)
{
  struct<7> Var0;
  vector3 vVar8;

  Var0.f_5 = 1073741824;
  Var0.f_6 = 1;
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if ((PED::IS_PED_ON_MOUNT(iParam0) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iParam0)))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1920417248, true) != 1)
      {
        vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, vParam1) };
        Var0.f_3 = iParam0;
        Var0.f_4 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iParam0);
        if (vVar8.x < 0f)
        {
          Var0.f_6 = 131072;
        }
        else
        {
          Var0.f_6 = 262144;
        }
        AITRANSPORT::TASK_EXIT_TRANSPORT(&Var0);
      }
    }
  }
}