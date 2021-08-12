// beat_hostage_rescue.ysc @ L7088
void func_219()
{
  if (!func_22(16384) && func_185(iLocal_510[1], 1, 1) < 35f)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_471[0 /*12*/].f_8))
    {
      iLocal_1050 = PHYSICS::_ADD_ROPE_2(vLocal_703, 0f, 0f, 0f, 0.25f, 0, true, 6, -1f);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_510[1]))
    {
      PHYSICS::_0x522FA3F490E2F7AC(iLocal_1050, 0, 1);
      PHYSICS::_0x462FF2A432733A44(iLocal_1050, Local_471[0 /*12*/].f_8, iLocal_510[1], 0f, 0f, 0f, 0f, 0f, 0f, 0, "SKEL_R_HAND");
      PHYSICS::_0x3C6490D940FF5D0B(iLocal_1050, 0, 0, 0.25f, 0);
    }
    func_29(16384);
  }
}