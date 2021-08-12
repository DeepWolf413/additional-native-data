// beat_wild_man.ysc @ L6464
void func_142()
{
  func_366(183);
  Local_376.f_8 = OBJECT::CREATE_OBJECT(Local_376.f_7, vLocal_1247, true, true, false, false, true);
  if (ENTITY::DOES_ENTITY_EXIST(Local_376.f_8))
  {
    ENTITY::SET_ENTITY_HEADING(Local_376.f_8, fLocal_1282);
  }
  TASK::_0xA6A76D666A281F2D(Local_376.f_8, joaat("DOCUMENT_WILD_MAN_JOURNAL"));
}