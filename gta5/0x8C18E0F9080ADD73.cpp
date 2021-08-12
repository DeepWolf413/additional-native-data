// agency_heist3a.ysc @ L129085
void func_954()
{
  Local_4995 = { 155.209f, -765.206f, 257.205f };
  Local_4998 = { 0f, 0f, -110f };
  iLocal_4928 = PED::CREATE_SYNCHRONIZED_SCENE(Local_4995, Local_4998, 2);
  ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_5079, iLocal_4928, "explode_doc_door", "missheist_agency3amcs_2", 1000f, -1000f, 4, 1000f);
}