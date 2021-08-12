// agency_heist3a.ysc @ L2802
void func_4()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_264))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(Local_264))
    {
      ENTITY::DETACH_ENTITY(Local_264, true, true);
      PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
      PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_288))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(Local_288))
    {
      ENTITY::DETACH_ENTITY(Local_288, true, true);
    }
  }
  if (func_23())
  {
    func_22(0);
    func_20(760.5546f, -983.6993f, 24.7744f, 82.4206f);
    func_17();
    func_5();
  }
}