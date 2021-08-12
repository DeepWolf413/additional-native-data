// agency_heist2.ysc @ L3349
void func_64(int iParam0, struct<3> Param1, var uParam4)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  float fVar7;
  struct<3> Var8;
  
  Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 28422, 0f, 0f, 0f) };
  Var3 = { Param1 - Var0 };
  fVar6 = SYSTEM::SQRT((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) * 10f));
  if (Var3.f_2 > 0f)
  {
    fVar6 = (fVar6 + MISC::ABSF(Var3.f_2));
  }
  fVar7 = func_67(Var0, Param1, fVar6, 1);
  Var3.f_2 = 0f;
  Var8 = { Var3 };
  func_65(&Var8, (fVar6 * SYSTEM::COS(fVar7)));
  Var8.f_2 = (fVar6 * SYSTEM::SIN(fVar7));
  *uParam4 = (SYSTEM::VMAG(Var3) / (fVar6 * SYSTEM::COS(fVar7)));
  ENTITY::DETACH_ENTITY(iLocal_93, false, true);
  OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_93, 1f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
  PHYSICS::SET_DAMPING(iLocal_93, 0, 0f);
  PHYSICS::SET_DAMPING(iLocal_93, 1, 0f);
  PHYSICS::SET_DAMPING(iLocal_93, 2, 0f);
  PHYSICS::SET_DAMPING(iLocal_93, 3, 0f);
  PHYSICS::SET_DAMPING(iLocal_93, 4, 0f);
  PHYSICS::SET_DAMPING(iLocal_93, 5, 0f);
  ENTITY::SET_ENTITY_VELOCITY(iLocal_93, Var8);
}