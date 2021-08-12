// beat_wealthy_couple.ysc @ L1091
void func_25()
{
  ENTITY::DETACH_ENTITY(Local_427[0 /*12*/].f_8, false, true);
  PED::_0xCE7A6C1D5CDE1F9D(uLocal_312[1], Local_427[0 /*12*/].f_8, "p_cs_purse01x_PH_R_HAND", "LOCO_ATTACH_PURSE");
  ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_427[0 /*12*/].f_8, uLocal_312[1], PED::GET_PED_BONE_INDEX(uLocal_312[1], 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
  PED::_0xE8ABE3B73FC7FE17(uLocal_312[1], Local_427[0 /*12*/].f_8, "p_cs_purse01x_PH_R_HAND", "LOCO_ATTACH_PURSE");
  bLocal_285 = true;
}