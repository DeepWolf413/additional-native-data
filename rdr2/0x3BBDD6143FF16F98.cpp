// barcustomer_interaction.ysc @ L494
void func_16()
{
  if (bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, -1342079302))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
    {
      OBJECT::DELETE_OBJECT(&iLocal_42);
    }
    bLocal_21 = false;
  }
  if (bLocal_22 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_18, 2131322378))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
    {
      PED::_0x3BBDD6143FF16F98(iLocal_18, iLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
    }
    bLocal_22 = false;
  }
}