// casino_interior_seating.ysc @ L3545
void func_104(int* iParam0)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  struct<3> Var4;
  struct<3> Var7;
  float fVar10;
  struct<3> Var11;
  
  fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
  Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  if (fVar3 > 0f)
  {
    Var7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 14201)) };
    fVar10 = (iParam0->f_19 - iParam0->f_15.f_2);
    fVar2 = func_107(0f, MISC::ABSF((iParam0->f_19 - Var7.f_2)));
    fVar1 = (fVar2 / fVar10);
    fVar0 = func_106(1f, ((fVar1 + (fVar3 * 0.5f)) * 0.5f));
  }
  if (fVar3 > 0.1f && fVar0 > 0f)
  {
    Var11 = { Var4.x, Var4.f_1, iParam0->f_19 };
    func_105(iParam0, &Var11);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iParam0->f_3, Var11, 0f, 0f, 0f);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_3, "size", fVar0, true);
  }
  else
  {
    func_93(iParam0);
  }
}