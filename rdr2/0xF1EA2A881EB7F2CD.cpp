// beat_wilderness_hanging.ysc @ L2399
bool func_72()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_408))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_337[0 /*12*/].f_8))
    {
      if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_337[0 /*12*/].f_8))
      {
        OBJECT::_0xB6CBD40F8EA69E8A(Local_337[0 /*12*/].f_8);
        ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_337[0 /*12*/].f_8, iLocal_382[0], -1, PED::GET_PED_BONE_INDEX(iLocal_382[0], 14284), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
        iLocal_409 = PHYSICS::_ADD_ROPE_2(Local_14.f_51, 0f, 0f, 0f, fLocal_387, 6, true, -1, -1f);
        if (ENTITY::DOES_ENTITY_EXIST(iLocal_382[0]))
        {
          ENTITY::SET_ENTITY_COORDS(iLocal_382[0], Local_14.f_51 - Vector(fLocal_387, 0f, 0f), false, false, true, true);
          PHYSICS::_0x522FA3F490E2F7AC(iLocal_409, 1, 1);
          PHYSICS::_0x462FF2A432733A44(iLocal_409, iLocal_408, Local_337[0 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
          PHYSICS::_0x3C6490D940FF5D0B(iLocal_409, 0, 0, fLocal_387, 0);
          PHYSICS::_0x76BAD9D538BCA1AA(iLocal_409, 0f);
          PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_409, 1f);
          PHYSICS::_0xF1EA2A881EB7F2CD(iLocal_409, 1);
          AUDIO::_0xF092B6030D6FD49C(iLocal_409, "ROPE_SETTINGS_DEFAULT");
          return true;
        }
      }
    }
  }
  return false;
}