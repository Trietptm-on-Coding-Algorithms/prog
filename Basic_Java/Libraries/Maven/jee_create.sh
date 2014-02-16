#!/bin/bash

mvn -DarchetypeGroupId=org.codehaus.mojo.archetypes -DarchetypeArtifactId=webapp-javaee7 -DarchetypeVersion=0.3-SNAPSHOT -DarchetypeRepository=https://nexus.codehaus.org/content/repositories/snapshots/ -DgroupId=com.ghg -DartifactId=support -Dversion=0.0 -Dpackage=com.ghg -Darchetype.interactive=false --batch-mode --update-snapshots archetype:generate
