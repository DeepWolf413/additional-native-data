// discoverable_generic_location.ysc @ L13992
void func_191(var uParam0)
{
  vector3 vVar0;
  float fVar3;
  struct<4> Var4;
  int iVar8;

  if (bLocal_23)
  {
    fVar3 = (func_187(uParam0, uParam0->f_4) + 145f);
  }
  else
  {
    fVar3 = (func_187(uParam0, uParam0->f_4) + 325f);
  }
  Var4 = (fVar3 + 180f);
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_13(uParam0, uParam0->f_4), fVar3, 0f, 0.82f, 0f) };
  TASK::OPEN_SEQUENCE_TASK(&iVar8);
  if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
  {
    TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
  TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, vVar0, 1f, 20000, 0.09f, 0, Var4, (fVar3 + 180f));
  TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 8f, -8f, -1, 24, 0f, false, 0, false, 0, false);
  TASK::CLOSE_SEQUENCE_TASK(iVar8);
  TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
  TASK::CLEAR_SEQUENCE_TASK(&iVar8);
}